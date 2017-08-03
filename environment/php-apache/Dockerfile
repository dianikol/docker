FROM php:5.6-apache
RUN docker-php-ext-install mysql mysqli

RUN apt-get update -y && apt-get install -y libpng-dev vim

RUN apt-get update -y && apt-get install -y ssmtp 

RUN apt-get update && \
    apt-get install -y \
        zlib1g-dev 

RUN docker-php-ext-install mbstring

RUN docker-php-ext-install zip

RUN docker-php-ext-install gd

RUN apt-get update \
  && apt-get install -y libmysqlclient-dev --no-install-recommends \
  && docker-php-ext-install pdo pdo_mysql \
  && apt-get clean \
  && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*

RUN a2enmod rewrite && service apache2 restart